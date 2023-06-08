#include "pch.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
class Contact {
public:
    CString name;
    CString phone;
    CString group;

    Contact(const CString& name, const CString& phone, const CString& group)
        : name(name), phone(phone), group(group) {}
};

// Класс напоминания
class Reminder {
public:
    CString title;
    CString explanation;
    CString time;
    std::vector<Contact> relatedContacts;

    Reminder(const CString& title, CString& explanation, CString& time)
        : title(title), explanation(explanation), time(time) {}

    void addRelatedContact(const Contact& contact) {
        relatedContacts.push_back(contact);
    }
};

// Класс записной книжки
class Notebook {
private:
    std::vector<Contact> contacts;
    std::vector<Reminder> reminders;

public:
    void addContact(const Contact& contact) {
        contacts.push_back(contact);
    }

    void addReminder(const Reminder& reminder) {
        reminders.push_back(reminder);
    }

    void printContacts() {
        for (const auto& contact : contacts) {
            std::cout << "Name: " << contact.name << std::endl;
            std::cout << "Phone: " << contact.phone << std::endl;
            std::cout << "Group: " << contact.group << std::endl;
            std::cout << std::endl;
        }
    }

    void printReminders() {
        for (const auto& reminder : reminders) {
            std::cout << "Title: " << reminder.title << std::endl;
            std::cout << "Explanation: " << reminder.explanation << std::endl;
            std::cout << "Time: " << reminder.time << std::endl;

            std::cout << "Related Contacts: ";
            for (const auto& contact : reminder.relatedContacts) {
                std::cout << contact.name << " ";
            }
            std::cout << std::endl;

            std::cout << std::endl;
        }
    }

    void saveActivityLog(const std::string& filename, const std::string& logMessage) {
        std::ofstream file(filename, std::ios::app);
        if (file.is_open()) {
            file << "Message: " << logMessage << std::endl;
            file.close();
        }
    }
};