//
//  UIColor+ZPMLib.m
//  ZappMerchantLib
//
//  Created by Alexandru Maimescu on 8/12/14.
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

#define PBBA_RGBA(r, g, b, a) [UIColor colorWithRed:r/255. green:g/255. blue:b/255. alpha:a]

#import "UIColor+ZPMLib.h"

@implementation UIColor (ZPMLib)

+ (instancetype)pbba_buttonBackgroundColor
{
    return PBBA_RGBA(255, 105, 30, 1);
}

+ (instancetype)pbba_buttonHighlightedColor
{
    return PBBA_RGBA(255, 180, 142, 1);
}

+ (instancetype)pbba_buttonForegroundColor
{
    return [UIColor whiteColor];
}

+ (instancetype)pbba_viewBackgroundColor
{
    return [UIColor whiteColor];
}

+ (instancetype)pbba_viewForegroundColor
{
    return [UIColor blackColor];
}

+ (instancetype)pbba_pbbaBrandColor
{
    return PBBA_RGBA(255, 105, 30, 1);
}

+ (instancetype)pbba_overlayColor
{
    return [UIColor colorWithWhite:1 alpha:0.6];
}

+ (instancetype)pbba_pingitLightColor
{
    return PBBA_RGBA(1, 172, 237, 1);
}

+ (instancetype)pbba_pingitLightHighlightedColor
{
    return PBBA_RGBA(160, 213, 244, 1);
}

+ (instancetype)pbba_pingitDarkColor
{
    return PBBA_RGBA(27, 167, 133, 1);
}

+ (instancetype)pbba_pingitDarkHighlightedColor
{
    return PBBA_RGBA(154, 209, 193, 1);
}

@end
