/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <MediaToolbox/MediaToolbox-Structs.h>
@class NSDictionary, NSString, NSObject;

@interface FigCPEFPAirPlaySession : NSObject {

	BOOL _invalid;
	unsigned _fairPlayContext;
	NSDictionary* _protectionInfo;
	NSDictionary* _contentInfo;
	CFAllocatorRef _fairPlayDeallocator;
	OpaqueFigEndpointPlaybackSessionRef _playbackSession;
	NSString* _mediaControlUUID;
	unsigned _vodkaVersion;
	FPStreamOpaque_Ref _fairPlaySession;
	NSObject*<OS_dispatch_queue> _serializationQueue;

}
-(void)dealloc;
-(id)initWithFairPlayContext:(unsigned)arg1 protectionInfo:(id)arg2 routeInfo:(id)arg3 playbackSession:(OpaqueFigEndpointPlaybackSessionRef)arg4 mediaControlUUID:(id)arg5 ;
-(id)initWithFairPlayContext:(unsigned)arg1 contentInfo:(id)arg2 routeInfo:(id)arg3 playbackSession:(OpaqueFigEndpointPlaybackSessionRef)arg4 mediaControlUUID:(id)arg5 ;
-(void)endSession;
-(void)beginSessionWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithFairPlayContext:(unsigned)arg1 routeInfo:(id)arg2 playbackSession:(OpaqueFigEndpointPlaybackSessionRef)arg3 mediaControlUUID:(id)arg4 ;
-(id)sicWithPic:(id)arg1 ;
-(id)legacySinfs;
-(id)mediaControlParamsWithStoreResponse:(id)arg1 ;
-(id)createPicRequestWithError:(id*)arg1 ;
-(void)authorizeItemCompletionHandler_objc:(SCD_Struct_Fi36*)arg1 picData:(CFDataRef)arg2 playerGUID:(CFStringRef)arg3 error:(int)arg4 ;
@end

