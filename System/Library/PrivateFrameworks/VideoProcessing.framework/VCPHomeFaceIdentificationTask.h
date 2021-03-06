/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <libobjc.A.dylib/VCPMADTaskProtocol.h>

@class NSData;

@interface VCPHomeFaceIdentificationTask : NSObject <VCPMADTaskProtocol> {

	/*^block*/id _completionHandler;
	NSData* _faceCropData;
	atomic<bool> _started;
	atomic<bool> _cancel;

}
+(id)taskWithFaceCrop:(id)arg1 andCompletionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(int)run;
-(void)cancel;
-(BOOL)run:(id*)arg1 ;
-(id)initWithFaceCrop:(id)arg1 andCompletionHandler:(/*^block*/id)arg2 ;
-(void)configureRequest:(id)arg1 withRevision:(unsigned long long)arg2 ;
-(float)resourceRequirement;
@end

