//
//  BSAStaticAd.h
//  BSATestSDK
//
//  Created by Joe Cortopassi on 5/29/13.
//  Copyright (c) 2013 BuySellAds. All rights reserved.
//

#import <UIKit/UIKit.h>


@class BSAModelStore;


@interface BSAStaticAd : NSObject <UIAlertViewDelegate>
@property (nonatomic, strong) BSAModelStore *model;
@property (nonatomic, strong) NSString *zoneKey;
@property (nonatomic, strong) NSString *category;
@property (nonatomic, strong) NSString *org_bannerid;
@property (nonatomic, strong) NSString *org_zoneid;
@property (nonatomic, strong) NSString *buynow_url;
@property (nonatomic, strong) NSString *image;
@property (nonatomic, strong) NSString *height;
@property (nonatomic, strong) NSString *zoneid;
@property (nonatomic, strong) NSString *evenodd;
@property (nonatomic, strong) NSString *altText;
@property (nonatomic, strong) NSString *bannerid;
@property (nonatomic, strong) NSString *i;
@property (nonatomic, strong) NSString *link;
@property (nonatomic, strong) NSString *creativeid;
@property (nonatomic, strong) NSString *click;
@property (nonatomic, strong) NSString *imp;
@property (nonatomic, strong) NSString *org_creativeid;
@property (nonatomic, strong) NSString *width;
@property (nonatomic, strong) NSString *active;
@property (nonatomic, strong) NSString *statlink;
@property (nonatomic, strong) NSString *headline;
@property (nonatomic, strong) NSString *story;
@property (nonatomic, strong) NSString *company_url;
@property (nonatomic, strong) NSString *company_name;
- (void) adTouchedWithCallback:(void(^)(void))callBack;
- (void) refreshAdObject;
@end
