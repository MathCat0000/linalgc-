# 🚀 **TUTTI GLI SHORTCUT ESSENZIALI DI VS CODE** (Visual Studio Code)

## 📁 **NAVIGAZIONE & FINESTRE**

### **Navigazione File (MOST USED)**
| Shortcut | Azione | Quando usarlo |
|----------|--------|---------------|
| `Ctrl+P` | **QUICK OPEN** (cerca file) | Saltare tra `.h` e `.c` |
| `Ctrl+Shift+O` | Vai a simbolo nel file | Trovare una funzione in `linalgc.h` |
| `Ctrl+G` → numero | Vai a riga specifica | Errori di compilazione "line 45" |
| `F12` | Vai a definizione | Su `linalgc_matrix_create` → va all'implementazione |
| `Alt+←` | Naviga indietro | Dopo F12, torna dove eri |
| `Alt+→` | Naviga avanti | |
| `Ctrl+Tab` | Cicla tra file aperti | Tra `matrix.c`, `test.c`, `linalgc.h` |

### **Gestione Editor & Split**
| Shortcut | Azione | Quando usarlo |
|----------|--------|---------------|
| `Ctrl+\` | **SPLIT VERTICALE** | `.h` a sinistra, `.c` a destra |
| `Ctrl+K Ctrl+\` | Split orizzontale | Codice sopra, terminale sotto |
| `Ctrl+1` / `2` / `3` | Focus su gruppo 1/2/3 | Passare tra split |
| `Ctrl+K W` | Chiudi editor group | |
| `Ctrl+K O` | Apri cartella/progetto | All'inizio della sessione |
| `Ctrl+B` | Mostra/nascondi sidebar | Più spazio per codice |

## ✏️ **EDITING & CODICE**

### **Editing Intelligente**
| Shortcut | Azione | Quando usarlo |
|----------|--------|---------------|
| `Ctrl+D` | Seleziona parola → prossima occorrenza | Rinomina variabile `matrix` in tutto il file |
| `Ctrl+Shift+L` | Seleziona TUTTE occorrenze | Rinomina variabile globale |
| `Alt+Click` | Aggiungi cursore multiplo | Modificare array paralleli |
| `Ctrl+Alt+↑/↓` | Aggiungi cursore sopra/sotto | Inizializzare più variabili |
| `Shift+Alt+↑/↓` | Copia riga sopra/sotto | Duplicare struct simile |
| `Ctrl+X` (senza selezione) | Taglia riga intera | Spostare una funzione |
| `Ctrl+Shift+K` | Elimina riga intera | |
| `Ctrl+/` | Commenta/Decommenta riga | Testare codice velocemente |
| `Shift+Alt+A` | Commenta blocco `/* */` | Per C |
| `Tab` / `Shift+Tab` | Indenta/Deindenta | |
| `Ctrl+]` / `[` | Indenta/Deindenta riga | |

### **Ricerca & Sostituzione**
| Shortcut | Azione | Quando usarlo |
|----------|--------|---------------|
| `Ctrl+F` | Cerca nel file corrente | Trovare `linalgc_matrix` nel file |
| `F3` / `Shift+F3` | Prossima/Precedente risultato | |
| `Ctrl+H` | Sostituisci nel file | Cambiare `int` → `size_t` |
| `Ctrl+Shift+F` | **CERCA IN TUTTO IL PROGETTO** | Trovare tutti gli usi di una funzione |
| `Ctrl+Shift+H` | Sostituisci in tutto il progetto | Rinomina funzione globalmente |
| `Ctrl+Shift+J` | Attiva/disattiva match case | |
| `Ctrl+Space` | IntelliSense (autocomplete) | Dopo `linalgc_` |

## 🐞 **DEBUG & COMPILAZIONE**

### **Debugging**
| Shortcut | Azione | Quando usarlo |
|----------|--------|---------------|
| `F5` | Start/Continue debug | Dopo aver impostato breakpoint |
| `F9` | Toggle breakpoint | Su `matrix_create()` per debug |
| `F10` | Step over | Procedere riga per riga |
| `F11` | Step into | Entrare in funzione |
| `Shift+F11` | Step out | Uscire da funzione |
| `Ctrl+Shift+D` | Apri vista Debug | |
| `Ctrl+Shift+Y` | Apri Debug Console | |

### **Terminale & Build**
| Shortcut | Azione | Quando usarlo |
|----------|--------|---------------|
| `` Ctrl+` `` | **Mostra/nascondi terminale** | Compilare e testare |
| `Ctrl+Shift+` `` | Nuovo terminale | Terminale separato per git |
| `Ctrl+Shift+5` | Split terminale | Build a sinistra, test a destra |
| `Ctrl+C` (in terminale) | Interrompi comando | Fermare programma infinito |
| `Ctrl+Shift+B` | **Esegui build task** | Compilazione rapida |
| `Ctrl+Shift+P` → "Run Task" | Esegui task specifico | `Build Tests` |

## 🔍 **VISUALIZZAZIONE & LAYOUT**

### **Views & Panels**
| Shortcut | Azione | Quando usarlo |
|----------|--------|---------------|
| `Ctrl+Shift+E` | Explorer (file) | |
| `Ctrl+Shift+F` | Search (cerca) | |
| `Ctrl+Shift+G` | Source Control (git) | Commit frequenti |
| `Ctrl+Shift+D` | Debug | |
| `Ctrl+Shift+X` | Extensions | |
| `Ctrl+Shift+M` | Problems (errori) | Dopo compilazione fallita |
| `Ctrl+Shift+U` | Output panel | Vedere output compilatore |
| `Ctrl+K Z` | Zen Mode (fullscreen) | Concentrazione massima |

### **Markdown Preview**
| Shortcut | Azione | Quando usarlo |
|----------|--------|---------------|
| `Ctrl+K V` | **Preview Markdown a lato** | Vedere `README.md` mentre scrivi |
| `Ctrl+Shift+V` | Preview in editor | |
| `Ctrl+Shift+P` → "Markdown: Toggle Preview" | Attiva/disattiva preview | |

## 🎮 **PERSONALIZZAZIONE & COMANDI**

### **Command Palette (IL PIÙ IMPORTANTE)**
| Shortcut | Azione | Esempi utili |
|----------|--------|--------------|
| `Ctrl+Shift+P` | **APRI COMMAND PALETTE** | Tutto quello che non ricordi! |
| Esempi da digitare dopo `Ctrl+Shift+P`: | |
| `>Git: Commit` | Commit | |
| `>File: Save All` | Salva tutto | |
| `>View: Split Editor` | Dividi editor | |
| `>Terminal: New` | Nuovo terminale | |
| `>Preferences: Open Settings (JSON)` | Modifica settings | |

### **Settings & Custom**
| Shortcut | Azione | |
|----------|--------|--|
| `Ctrl+,` | Apri Settings | |
| `Ctrl+K Ctrl+S` | Apri Keyboard Shortcuts | Personalizzare shortcuts |
| `Ctrl+Shift+P` → "Preferences: Open Settings (JSON)" | Settings avanzati | |

## 📊 **WORKFLOW PER IL TUO PROGETTO MATRICI**

### **Setup Giornaliero**:
1. `Ctrl+K O` → Apri cartella `linalgc-project`
2. `Ctrl+\` → Split verticale
3. Sinistra: `include/linalgc.h` (`Ctrl+P` → "linalgc.h")
4. Destra: `src/core/matrix.c` (`Ctrl+P` → "matrix.c")
5. `` Ctrl+` `` → Terminale in basso
6. `Ctrl+Shift+B` → Compila
7. `Ctrl+K V` → Preview `README.md` a destra

### **Ciclo di Sviluppo**:
1. **Scrivi funzione** in `.h` → `F12` per implementazione
2. **Implementa** in `.c` → `` Ctrl+` `` per compilare
3. **Testa** → `F5` per debug se problemi
4. **Commit** → `Ctrl+Shift+G` → scrivi messaggio → commit
5. **Naviga** → `Alt+←` per tornare indietro

### **Debug di Errori**:
1. `Ctrl+Shift+B` → compilazione fallisce
2. `Ctrl+Shift+M` → vedi errori
3. `F8` → vai al prossimo errore
4. `Ctrl+Click` sul nome funzione → vai alla definizione
5. Correggi → `Ctrl+S` → ricompila

## 💡 **TOP 10 SHORTCUTS DA MEMORIZZARE ORA**

1. `Ctrl+P` → **Salta a file** (90% della navigazione)
2. `Ctrl+\` → **Split verticale** (lavorare su .h e .c insieme)
3. `` Ctrl+` `` → **Terminale** (compilare/testare)
4. `Ctrl+Shift+P` → **Command Palette** (tutto il resto)
5. `Ctrl+Shift+G` → **Git** (commit frequenti)
6. `F12` → **Vai a definizione** (da chiamata a implementazione)
7. `Ctrl+D` → **Seleziona prossima occorrenza** (rinomina)
8. `Ctrl+Shift+F` → **Cerca in tutto il progetto** (dove usata questa funzione?)
9. `Ctrl+K V` → **Preview Markdown** (vedere README)
10. `Ctrl+Shift+B` → **Build** (compilazione rapida)

## 🎯 **SHORTCUTS SPECIALI PER C/PROGETTO MATRICI**

### **Per strutture dati matrici**:
```c
// Usa questi quando scrivi struct:
1. `Ctrl+Space` dopo `typedef struct` → autocomplete
2. `Alt+Shift+↓` per duplicare righe di array
3. `Ctrl+Shift+L` per rinominare `data` → `elements` in tutto il file
```

### **Per header files**:
```c
// In linalgc.h:
#ifndef LINALGC_H
#define LINALGC_H
// ... `Alt+Shift+↓` per duplicare dichiarazioni simili
#endif
```

## ⚡ **EXTRA: CUSTOM SHORTCUTS PER TE**

Aggiungi a `keybindings.json` (`Ctrl+Shift+P` → "Preferences: Open Keyboard Shortcuts (JSON)"):

```json
[
    {
        "key": "ctrl+shift+m",  // Matrix create snippet
        "command": "editor.action.insertSnippet",
        "args": {
            "snippet": "linalgc_matrix* ${1:mat} = linalgc_matrix_create(${2:3}, ${3:3}, &${4:err});"
        },
        "when": "editorTextFocus && editorLangId == c"
    },
    {
        "key": "ctrl+shift+d",  // Matrix destroy
        "command": "editor.action.insertSnippet",
        "args": {
            "snippet": "linalgc_matrix_destroy(&${1:mat});"
        }
    },
    {
        "key": "ctrl+shift+t",  // Test template
        "command": "editor.action.insertSnippet",
        "args": {
            "snippet": "void test_${1:name}(void) {\n    linalgc_error_t err;\n    ${2:// test code}\n    printf(\"Test ${1:name}: PASS\\n\");\n}"
        }
    }
]
```

**Consiglio**: Stampa questa lista e tienila vicino. Dopo una settimana saranno muscolo memoria!