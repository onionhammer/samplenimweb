# Imports
import templates
import master

# Types
type TodoItem* = object
    id*: int
    description*: string

# Application state
var nextId*    = 1
var todoItems* = newSeq[TodoItem]()

# Views
proc `$`(item: TodoItem): string = tmpli html"""
    <a href="/remove/$(item.id)">x</a>
    <span>$(item.description)</span>
    """

proc index*: string =
    if todoItems.len > 0:
        tmpli html"""
            <ul>
                $for item in todoItems {
                    <li>$item</li>
                }
            </ul>
            """
    else:
        tmpli html"""
            <div id="warning">No TODO items</div>
            """

    tmpl html"""
        <form action="/add" method="post">
            <label for="newItem">New Item:</label>
            <input id="newItem" name="newItem">
            <button name=>Add</button>
        </form>
        """

    return master.layout("TODO", result)