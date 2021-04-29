/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CMCapture/CMCapture-Structs.h>
@class NSArray, NSString, NSMutableDictionary;

@interface BWPhotoManifest : NSObject {

	NSArray* _photoDescriptors;
	NSString* _captureRequestIdentifier;
	os_unfair_lock_s _bufferPtrValueToPhotoDescriptorLock;
	NSMutableDictionary* _bufferPtrValueToPhotoDescriptor;

}

@property (nonatomic,readonly) NSArray * photoDescriptors;                       //@synthesize photoDescriptors=_photoDescriptors - In the implementation block
@property (nonatomic,readonly) NSString * captureRequestIdentifier;              //@synthesize captureRequestIdentifier=_captureRequestIdentifier - In the implementation block
-(id)description;
-(void)dealloc;
-(NSString *)captureRequestIdentifier;
-(NSArray *)photoDescriptors;
-(id)descriptorForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)descriptorForIdentifier:(id)arg1 ;
-(id)initWithDescriptors:(id)arg1 captureRequestIdentifier:(id)arg2 ;
@end
