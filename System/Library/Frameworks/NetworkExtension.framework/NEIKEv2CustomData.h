/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NEIKEv2CustomData : NSObject <NSCopying> {

	unsigned long long _customType;
	NSData* _customData;

}

@property (assign) unsigned long long customType;              //@synthesize customType=_customType - In the implementation block
@property (retain) NSData * customData;                        //@synthesize customData=_customData - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)customType;
-(NSData *)customData;
-(void)setCustomType:(unsigned long long)arg1 ;
-(void)setCustomData:(NSData *)arg1 ;
@end
