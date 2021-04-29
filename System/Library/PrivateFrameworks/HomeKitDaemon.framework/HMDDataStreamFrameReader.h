/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_data;
@class NSObject;

@interface HMDDataStreamFrameReader : NSObject {

	NSObject*<OS_dispatch_data> _partialFrame;
	BOOL _headerInfoRead;
	BOOL _streamFailed;
	unsigned char _currentframeType;
	unsigned long long _payloadLength;

}
+(id)logCategory;
-(id)init;
-(void)reset;
-(BOOL)hasFailed;
-(unsigned long long)bytesNeededForCurrentFrame;
-(unsigned long long)_getCurrentFrameSize;
-(void)_readFrameHeaderIfPossible;
-(BOOL)hasCompleteFrame;
-(void)pushFrameData:(id)arg1 ;
-(BOOL)hasPartialData;
-(id)popRawFrame;
@end
