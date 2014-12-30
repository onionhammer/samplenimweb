# Imports
import future, strutils, sequtils, asyncdispatch
import jester, templates

# Views
import views

# Procedures
proc add(description: string) =
    todoItems.add TodoItem(
        id:          nextId,
        description: description)

    inc(nextId)

proc remove(id: string) =
    todoItems.keepItIf( $it.id != id )

# Routes
routes:

    get "/":    resp views.index()
    get "/add": resp views.index()

    post "/add":
        add(@"newItem")
        resp views.index()

    get "/remove/@id":
        remove(@"id")
        resp views.index()

# Tell Jester to keep running
runForever()