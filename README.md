###Latest Updates###

**11/21/2012**

***iOS SDK V0.3.3***

+ fix one critical bug
+ add more performance log
+ internal enhancement for real time APIs

**11/12/2012**

***iOS SDK V0.3.2***

+ add customization hook for different apps
+ enable event log for arrival/departure
+ minor update of Demo App

**10/30/2012**

***iOS SDK V0.3.1***

+ change userArrivedAtPlaceWithLocation: to userArrivedAtPlace:withLocation: to return optional personal place.

**10/16/2012**

***iOS SDK V0.3.0***

+ add logout to allow user log out alohar system
+ update apple docs for user stay APIs

**10/09/2012**

***Android SDK V0.5***

+ significantly improve the battery life on popular models
+ enhance the mobile state APIs to be more responsive and accurate
+ enhance the real time place detection APIs

**09/21/2012**

***iOS SDK V0.2.9***

+ bug fixes

**09/14/2012**

***iOS SDK V0.2.8***

+ bug fixes and performance enhancement

**08/01/2012**

***iOS SDK V0.2.7***

+ enhance real time API in power save mode
+ deprecated autostart APIs
+ add debug log delegate
+ apple doc updates

**07/23/2012**

***iOS SDK V0.2.6***

+ support power save mode
+ various bug fixes and enhancement

**06/15/2012**

***Android SDK V0.3***

+ Enhancement of Mobile State APIs

**05/24/2012**

***Android SDK V0.2***

+ support mobile movement state
+ update onCommute API and mobile state APIs
+ battery life enhancement
+ update Android Demo Application

***iOS SDK V0.2.4***, main changes:

+ More battery life enhancement
+ updates for user stays edit APIs
+ Various bug fixes and performance enhancement

**05/14/2012**

***iOS SDK V0.2.2***, main changes:

+ battery life enhancement
+ edit APIs for user stays
+ new APIs for high level mobile movement state: not moving, slow moving and fast moving.
+ support block
+ some APIs updates and various bug fixes
+ updated Demo App
+ updated documentation: API doc (iOS/documents/apple_doc), tutorial (iOS/documents/tutorial.html), and SDK reference (iOS/documents/documentation.html)

Questions? Contact us developer@alohar.com 

##Alohar Demo##

This project demonstrates how to integrate Alohar SDK into your iOS and Android application.

###About Alohar###

Mobile phones are smart today, but they can be even smarter with the Alohar Ambient Analytics platform. Mobile apps running the Alohar SDK can automatically understand a smartphone user's behavior thanks to the SDK’s persistent sensing technology and Alohar cloud-based analytics services. Using minimal battery, Alohar-powered apps can also determine the places a user visits without requiring manual check-ins. Mobile app developers are using the Alohar platform now to create smart personal assistants, games, health, fitness, safety, transportation, dating and shopping apps.

###Main Features###

The Alohar Mobile Ambient Analytics Platform enables ambient location apps. In other words, it efficiently collects location and other mobile sensor data and quickly analyzes it to understand a smartphone user’s behavior. It achieves this while using the minimal amount of battery necessary on the mobile device. The platform is composed of a smartphone client SDK (software development kit) for Android and iPhone and several cloud-based services. The platform uses mobile location, motion, direction, Wi-Fi and timing data to learn about the mobile user in real time and over time. Therefore it provides more advanced functionality than a conventional mobile LBS (location based services) platform. 

**Here are just a few things you can do with the platform:**

+ Automatically detect the places (including the name and category) that the user visits.
+ Minimize battery power consumption while gathering data from the mobile device.
+ Get notifications when a user arrives at or departs from a place.
+ Automatically get the number of times a user visits a place, and how much time is spent there per visit.
+ Automatically understand a user’s mobile motion state (e.g. stationary, walking or driving).

**Check Out Our ShowCase App**: **[Placeme](http://itunes.apple.com/us/app/placeme/id501165259?mt=8)**


###Getting Started###

Go to [Alohar's Developer](http://www.alohar.com/developer) get a free developer account.
Checkout the latest SDK and sample app in this repo.

###Sample Applications###

This SDK comes with a sample application that demonstrates authorization, making API calls to guide you in development. It also shows case how to our platform works behides the scenes.

***To build and run the iOS sample application with XCode:***

+ Open the included XCode Project File by selecting iOS/aloharDemo.xcodeproj.
+ Select Build->Build and Run. This should compile the application and launch it.

***To build and run the Android sample application with Eclipse:***

+ Import Demo applicaton as Android project under Android/Demo
+ Choose Android OS 2.2
+ Compile and Run. 

**NOTE**: **Our iOS SDK requires OS5.0+ and XCode4.2+. Our Android SDK requires OS2.2+. The AppID and ApiKey in our sample apps are there only for demo purpose. Please get unique appId and apiKey for your App from www.alohar.com/developer**

**Alohar SDK leverages various sensor data and has a learning engine, we recommend you run the sample application on your device and use it for sometime to see its full power. Right after the initial installation, you will see empty user stay or places. Please keep using it for a short time, you will see your first stay detected shortly.**

###Report Issues/Bugs/Feature Requests###

Both SDKs are still in Beta stage, we are collecting feedbacks and potential feature requests. Please let's know your thought. 

Got questions? Email <developer@alohar.com>

***Copyright 2011-2012 Alohar Mobile Inc. All rights reserved.***
