/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleAccount/AppleAccount-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface AASuspensionInfo : NSObject <NSCopying> {

	NSDictionary* _suspensionInfoDictionary;

}

@property (getter=isiCloudSuspended,nonatomic,readonly) BOOL iCloudSuspended; 
@property (getter=isFamilySuspended,nonatomic,readonly) BOOL familySuspended; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)isiCloudSuspended;
-(BOOL)isFamilySuspended;
@end
