/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Messages/PlugIns/FaceTime.imservice/FaceTime
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FaceTime/FaceTime-Structs.h>
#import <FaceTime/FTFaceTimeMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSNumber;

@interface FTCancelMessage : FTFaceTimeMessage <NSCopying> {

	NSArray* _peers;
	NSNumber* _reason;

}

@property (copy) NSArray * peers;                //@synthesize peers=_peers - In the implementation block
@property (copy) NSNumber * reason;              //@synthesize reason=_reason - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSNumber *)reason;
-(void)setReason:(NSNumber *)arg1 ;
-(void)setPeers:(NSArray *)arg1 ;
-(NSArray *)peers;
-(id)requiredKeys;
-(id)messageBody;
-(id)bagKey;
@end

