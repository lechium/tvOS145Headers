/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ShazamKit/SHStore.h>

@interface SHRemoteStore : SHStore
+(id)new;
+(BOOL)_validatePartnerName:(id)arg1 ;
+(BOOL)_validateInstallationID:(id)arg1 ;
-(id)init;
-(id)initWithPartnerName:(id)arg1 ;
-(id)_createMatcher;
-(id)initWithPartnerName:(id)arg1 installationID:(id)arg2 ;
@end
