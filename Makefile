CC := gcc

TARGET := build/programmer_calculator

SRCDIR := src
INCDIR := include
BUILDDIR := build
OBJDIR := $(BUILDDIR)/obj

SOURCES := $(wildcard $(SRCDIR)/*.c)
INCLUDES := $(wildcard $(INCDIR)/*.h)
OBJECTS := $(SOURCES:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

CFLAGS := -g -Wall -I$(INCDIR)

LFLAGS :=

ifeq ($(OS),Windows_NT)
    MKDIR_P = if not exist "$(subst /,\,$1)" mkdir "$(subst /,\,$1)"
    RM = del /Q /F
    RMDIR = if exist "$(subst /,\,$1)" rmdir /S /Q "$(subst /,\,$1)"
    FixPath = $(subst /,\,$1)
else
    MKDIR_P = mkdir -p $1
    RM = rm -f $1
    RMDIR = rm -rf $1
    FixPath = $1
endif

$(OBJDIR)/%.o: $(SRCDIR)/%.c $(INCLUDES)
	@$(call MKDIR_P,$(OBJDIR))
	$(CC) $(CFLAGS) -c $< -o $@

$(TARGET): $(OBJECTS)
	@$(call MKDIR_P,$(BUILDDIR))
	$(CC) $^ -o $(TARGET) $(LFLAGS)

all: $(TARGET)

clean:
	@echo " Cleaning..."
	@$(call RMDIR,$(BUILDDIR))

.PHONY: clean