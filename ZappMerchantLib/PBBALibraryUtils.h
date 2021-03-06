//
//  PBBALibraryUtils.h
//  ZappMerchantLib
//
//  Created by Alexandru Maimescu on 6/27/16.
//  Copyright 2016 IPCO 2012 Limited
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <Foundation/Foundation.h>

/**
 *  PBBA Button themes.
 */
typedef NS_ENUM(NSInteger, PBBAThemeType) {
    /**
     *  The PBBA theme.
     */
    PBBAThemeTypePBBA = 1,
    /**
     *  The co-branded light Pingit theme.
     */
    PBBAThemeTypePingitLight = 2,
    /**
     *  The co-branded dark Pingit theme.
     */
    PBBAThemeTypePingitDark = 3,
    /**
     *  The default theme.
     */
    PBBAThemeTypeDefault = PBBAThemeTypePBBA
};

/**
 *  PBBA CFI app name used in popup text.
 */
typedef NS_ENUM(NSInteger, PBBACFIAppNameType) {
    /**
     *  Application independent naming like "your mobile banking app".
     */
    PBBACFIAppNameTypePBBA = 1,
    /**
     *  The default Pingit app name.
     */
    PBBACFIAppNameTypePingit = 2,
    /**
     *  The default CFI app name.
     */
    PBBACFIAppNameTypeDefault = PBBACFIAppNameTypePBBA
};

/**
 *  The dictionary key to get the custom PBBA theme value.
 */
extern NSString * _Nonnull const kPBBACustomThemeKey;

/**
 *  The dictionary key to get the CFI app name used for popup text.
 */
extern NSString * _Nonnull const kPBBACFIAppNameKey;


/**
 *  The library utils class with helper methods.
 */
@interface PBBALibraryUtils : NSObject

/**
 *  Get the custom PBBA branding configuration.
 *
 *  @return The custom PBBA branding configuration.
 */
+ (nullable NSDictionary *)pbbaCustomConfig;

/**
 *  Set a custom PBBA branding configuration.
 *
 *  @param config The custom PBBA branding configuration.
 */
+ (void)setPBBACustomConfig:(nonnull NSDictionary *)config;

/**
 *  Set a custom PBBA scheme used to launch the CFI app.
 *
 *  @param customScheme The custom PBBA scheme.
 */
+ (void)setPBBACustomScheme:(nonnull NSString *)customScheme;

/**
 *  Check if at least one PBBA enabled CFI app is installed on the current device.
 *
 *  @return YES if CFI app is installed.
 */
+ (BOOL)isCFIAppAvailable;

/**
 *  Open the PBBA enabled CFI app.
 *
 *  @param secureToken The secure token to retrieve the transaction details.
 *
 *  @return YES if the process of hand-off to CFI app was successful.
 */
+ (BOOL)openBankingApp:(nonnull NSString *)secureToken;

/**
 *  Check if CFI app should be launched without showing the popup.
 *
 *  @return YES if CFI app should be launched without showing the popup.
 */
+ (BOOL)shouldLaunchCFIApp;

/**
 *  Check if a PBBA enabled CFI app was launched.
 *
 *  @return YES if a PBBA enabled CFI app was launched.
 */
+ (BOOL)wasCFIAppLaunched;

/**
 *  Save that PBBA enabled CFI app was launched.
 */
+ (void)registerCFIAppLaunch;

/**
 *  Open information page about PBBA payments in browser.
 *
 *  @return YES if Safari was launched.
 */
+ (BOOL)openTellMeMoreLink;

@end
