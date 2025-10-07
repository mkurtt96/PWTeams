# 🧍‍♂️ PW.Teams

**PW.Teams** is a lightweight Unreal Engine 5 module providing team and faction logic for multiplayer and AI-driven gameplay.  
It defines relations between actors — such as Ally, Enemy, or Neutral — and provides unified helpers for querying or comparing team states.

Originally developed as part of **ProjectW**, this module is designed to be **engine-agnostic**, **dependency-light**, and **fully optional** for other PW systems.

---

## ⚙️ Overview

**PW.Teams** enables consistent team logic across gameplay systems, featuring:

- **TeamComponent** — replicates and manages team ownership for any actor.  
- **TeamFunctions** — static library for relation and mask checks.  
- **TeamAgent Interface** — allows actors to expose team-related data.  
- **TeamColorData** — optional asset for assigning visual or gameplay color coding to teams.  
- **TeamTypes** — defines enums, relation masks, and type-safe identifiers.

---

## 🧱 Module Dependencies

| Type | Dependencies |
|------|---------------|
| **Public** | Core |
| **Private** | CoreUObject, Engine, Slate, SlateCore, PWSharedTypes |

---

## 🧠 Key Features

- **Relation Masks** — flexible bitmask-based targeting logic.  
- **Team-Aware Systems** — works seamlessly with ability and projectile systems that support team relations.  
- **Blueprint Integration** — all relation and color functions are exposed to Blueprint.  
- **Lightweight & Optional** — no reliance on Gameplay Ability System (GAS) or Unreal-specific subsystems.  
- **PWAbility Integration** — used for hit, target, and collision filtering when `WITH_PWTEAMS` is enabled.

---

## 🧰 Compatibility

- **Engine:** Unreal Engine 5.3+  
- **Status:** Stable / Lightweight Core  
- **Used By:**  
  - PWAbility (optional)

---

## 📄 License


This project is licensed under the **MIT License**.  
See the [LICENSE](LICENSE) file for full details.

---

## 👤 Author

**Metehan Goksel Kurtulan**  
Game Developer — Systems & Gameplay Engineering  
