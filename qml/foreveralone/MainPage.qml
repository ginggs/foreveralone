import QtQuick 1.1
import com.nokia.meego 1.0

Page {
    orientationLock: PageOrientation.LockPortrait

    Label {
        anchors.top: parent.top
        anchors.topMargin: parent.height / 5
        anchors.horizontalCenter: parent.horizontalCenter
        text: qsTr("Well known game of birds and pigs cracker")
    }

    Item {
        anchors.left: parent.left
        anchors.leftMargin: 10
        anchors.top: parent.top
        anchors.topMargin: parent.height / 3
        scale: 1.6

        Label {
            id: alone
            text: qsTr("Alone mode enabled")
            visible: false
        }
        Label {
            id: normal
            text: "Normal mode enabled"
            visible: false
        }
    }

    Column {
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.top: parent.top
        anchors.topMargin: parent.height / 2
        spacing: 10
        Button {
            text: qsTr("Forever alone mode")
            onClicked: {
                alone.visible = true
                normal.visible = false
                famode.enable()
            }
        }
        Button {
            text: qsTr("Normal mode")
            onClicked: {
                alone.visible = false
                normal.visible = true
                famode.disable()
            }

        }
    }
}
