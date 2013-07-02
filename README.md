BuySellAds CPM Ad Serving
=======
1. Right click in the file navigator, and select "Add Files to..." (Image 1, Arrow 1).

![Image 1](https://raw.github.com/buysellads/ios_sdk/master/screenshots/image_1.png)

2. In the "Add Files" browser, select the Buy Sell Ads framework that you downloaded (Image 2, Arrow 1). Make sure that the files are copied into your project (Image 2, Arrow 2), and it is added to the appropriate Target (Image 2, Arrow 3). Press the "Add" button (Image 2, Arrow 4).

![Image 2](https://raw.github.com/buysellads/ios_sdk/master/screenshots/image_2.png)

3. Import the framework into the class that it will be used in, by adding "#import <BSALibrary/BSALibrary.h>" (Image 3, Arrow 1).

4. Provide a property to attach your Ad Controller to (Image 3, Arrow 2). This Ad Controller must persist, and provides handling for when the ad is clicked.

![Image 3](https://raw.github.com/buysellads/ios_sdk/master/screenshots/image_3.png)

5. Create a new Ad Controller, with the zone key you were provided with for this Ad Zone, and set it to the property you created in step 4 by adding "self.adController = [BSAAdController createControllerFromZoneKey:@"Your zone key here"];" (Image 3, Arrow 3)

6. Set the position and size for the ad, by creating a CGRect and setting it to "self.adController.customView.frame" (Image 3, Arrow 4)

7. Place the Ad on your view using "[self.view addSubview:self.adController.customView];" (Image 3, Arrow 4)

8. Go to Project Settings, and select your Target. Navigate to the "Build Settings" tab (Image 4, Arrow 1)

![Image 4](https://raw.github.com/buysellads/ios_sdk/master/screenshots/image_4.png)

9. Find the "Other Linker Flags" setting in the "Linking" category (Image 4, Arrow 2). Set two flags so that XCode recognizes the framework and it's categories, "-ObjC" and "-all_load" (Image 4, Arrow 3)

10. Also in your target (Image 5, Arrow 1), select the "Build Phases" tab (Image 5, Arrow 2). Open the "Link Binary With Libraries" group (Image 5, Arrow 3), and hit the "+" sign to add another framework (Image 5, Arrow 4)

![Image 5](https://raw.github.com/buysellads/ios_sdk/master/screenshots/image_5.png)

11. When the "Choose frameworks..." pane opens, select the "AdSupport.framework" (Image 6, Arrow 1), then click the "Add" button (Image 6, Arrow 2).

![Image 6](https://raw.github.com/buysellads/ios_sdk/master/screenshots/image_6.png)






BuySellAds CPI AdServe-side
=======
1. Right click in the file navigator, and select "Add Files to..." (Image 1, Arrow 1).

![Image 1](https://raw.github.com/buysellads/ios_sdk/master/screenshots/image_1.png)

2. In the "Add Files" browser, select the Buy Sell Ads framework that you downloaded (Image 2, Arrow 1). Make sure that the files are copied into your project (Image 2, Arrow 2), and it is added to the appropriate Target (Image 2, Arrow 3). Press the "Add" button (Image 2, Arrow 4).

![Image 2](https://raw.github.com/buysellads/ios_sdk/master/screenshots/image_2.png)

3. Import the framework into the class that it will be used in, by adding "#import <BSALibrary/BSALibrary.h>" (Image 3, Arrow 1).

4. Provide a property to attach your Ad Controller to (Image 3, Arrow 2). This Ad Controller must persist, and provides handling for when the ad is clicked.

![Image 3](https://raw.github.com/buysellads/ios_sdk/master/screenshots/image_3.png)

5. Create a new Ad Controller, with the zone key you were provided with for this Ad Zone, and set it to the property you created in step 4 by adding "self.adController = [BSAAdController createControllerFromZoneKey:@"Your zone key here"];" (Image 3, Arrow 3)

6. Set the position and size for the ad, by creating a CGRect and setting it to "self.adController.customView.frame" (Image 3, Arrow 4)

7. Place the Ad on your view using "[self.view addSubview:self.adController.customView];" (Image 3, Arrow 4)

8. Go to Project Settings, and select your Target. Navigate to the "Build Settings" tab (Image 4, Arrow 1)

![Image 4](https://raw.github.com/buysellads/ios_sdk/master/screenshots/image_4.png)

9. Find the "Other Linker Flags" setting in the "Linking" category (Image 4, Arrow 2). Set two flags so that XCode recognizes the framework and it's categories, "-ObjC" and "-all_load" (Image 4, Arrow 3)

10. Also in your target (Image 5, Arrow 1), select the "Build Phases" tab (Image 5, Arrow 2). Open the "Link Binary With Libraries" group (Image 5, Arrow 3), and hit the "+" sign to add another framework (Image 5, Arrow 4)

![Image 5](https://raw.github.com/buysellads/ios_sdk/master/screenshots/image_5.png)

11. When the "Choose frameworks..." pane opens, select the "AdSupport.framework" (Image 6, Arrow 1), then click the "Add" button (Image 6, Arrow 2).

![Image 6](https://raw.github.com/buysellads/ios_sdk/master/screenshots/image_6.png)






BuySellAds CPI Install Tracking
=======
1. Right click in the file navigator, and select "Add Files to..." (Image 1, Arrow 1).

![Image 1](https://raw.github.com/buysellads/ios_sdk/master/screenshots/image_1.png)

2. In the "Add Files" browser, select the Buy Sell Ads framework that you downloaded (Image 2, Arrow 1). Make sure that the files are copied into your project (Image 2, Arrow 2), and it is added to the appropriate Target (Image 2, Arrow 3). Press the "Add" button (Image 2, Arrow 4).

![Image 2](https://raw.github.com/buysellads/ios_sdk/master/screenshots/image_2.png)

3. Import the framework into the class that it will be used in, by adding "#import <BSALibrary/BSALibrary.h>" (Image 3, Arrow 1).

![Image 3](https://raw.github.com/buysellads/ios_sdk/master/screenshots/image_3b.png)

4. Provide a property to attach your Install Tracker to (Image 3, Arrow 2). This Install Tracker must persist, and provides handling for when the install is confirmed

5. Create a new Install Tracker, with the zone key you were provided with for this Ad Zone, and set it to the property you created in step 4 by adding "self.installTracker = [BSAInstallTracker confirmInstallationForZoneKey:@"Your zone key here"];" (Image 3, Arrow 3). The install tracker will first check to see if this installation has been tracked, and if not, will confirm the installation with Buy Sell Ads

6. Go to Project Settings, and select your Target. Navigate to the "Build Settings" tab (Image 4, Arrow 1)

![Image 4](https://raw.github.com/buysellads/ios_sdk/master/screenshots/image_4.png)

7. Find the "Other Linker Flags" setting in the "Linking" category (Image 4, Arrow 2). Set two flags so that XCode recognizes the framework and it's categories, "-ObjC" and "-all_load" (Image 4, Arrow 3)

8. Also in your target (Image 5, Arrow 1), select the "Build Phases" tab (Image 5, Arrow 2). Open the "Link Binary With Libraries" group (Image 5, Arrow 3), and hit the "+" sign to add another framework (Image 5, Arrow 4)

![Image 5](https://raw.github.com/buysellads/ios_sdk/master/screenshots/image_5.png)

9. When the "Choose frameworks..." pane opens, select the "AdSupport.framework" (Image 6, Arrow 1), then click the "Add" button (Image 6, Arrow 2).

![Image 6](https://raw.github.com/buysellads/ios_sdk/master/screenshots/image_6.png)
