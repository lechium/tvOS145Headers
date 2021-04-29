/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCapture/AVFCapture-Structs.h>
@class AVCaptureInput, NSString;

@interface AVCaptureInputPortInternal : NSObject {

	AVCaptureInput* input;
	NSString* mediaType;
	opaqueCMFormatDescriptionRef formatDescription;
	OpaqueCMClockRef clock;
	BOOL enabled;
	int changeSeed;
	NSString* sourceID;
	NSString* sourceDeviceType;
	long long sourceDevicePosition;

}
-(id)init;
-(void)dealloc;
@end
