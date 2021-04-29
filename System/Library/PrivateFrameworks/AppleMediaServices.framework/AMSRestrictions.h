/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface AMSRestrictions : NSObject
+(BOOL)explicitContentAllowed;
+(BOOL)allowActiveAccountModifications;
+(BOOL)requirePasswordImmediately;
+(id)_featureNameForMediaType:(unsigned long long)arg1 ;
+(long long)maximumMediaRank;
+(BOOL)allowAccountModifications;
+(BOOL)eroticaAllowed;
+(BOOL)inAppPurchaseAllowed;
+(BOOL)isParentalControlEnabled;
+(BOOL)onDeviceDiagnosticsAllowed;
+(id)rankForMediaType:(unsigned long long)arg1 ;
@end

