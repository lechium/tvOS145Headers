/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData;

@interface _DKEventData : NSObject {

	unsigned long long _version;
	NSData* _event;
	unsigned long long _uncompressedLength;

}
+(id)fromPBCodable:(id)arg1 ;
-(id)toPBCodable;
@end

