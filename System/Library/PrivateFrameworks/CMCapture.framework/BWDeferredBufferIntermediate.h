/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWDeferredIntermediate.h>

@class NSDictionary, NSString;

@interface BWDeferredBufferIntermediate : BWDeferredIntermediate {

	CVBufferRef _buffer;
	NSDictionary* _attributes;
	NSString* _metadataTag;
	unsigned long long _bufferType;
	NSString* _portType;
	int _compressionProfile;

}

@property (nonatomic,readonly) CVBufferRef buffer;                         //@synthesize buffer=_buffer - In the implementation block
@property (nonatomic,readonly) unsigned long long bufferType;              //@synthesize bufferType=_bufferType - In the implementation block
@property (nonatomic,readonly) NSString * metadataTag;                     //@synthesize metadataTag=_metadataTag - In the implementation block
@property (nonatomic,readonly) NSString * portType;                        //@synthesize portType=_portType - In the implementation block
@property (nonatomic,readonly) NSDictionary * attributes;                  //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) int compressionProfile;                     //@synthesize compressionProfile=_compressionProfile - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)attributes;
-(CVBufferRef)buffer;
-(int)flush;
-(int)setBuffer:(CVBufferRef)arg1 ;
-(NSString *)portType;
-(id)archive:(int*)arg1 ;
-(id)initWithBuffer:(CVBufferRef)arg1 tag:(id)arg2 bufferType:(unsigned long long)arg3 metadataTag:(id)arg4 portType:(id)arg5 compressionProfile:(int)arg6 URL:(id)arg7 ;
-(int)setURL:(id)arg1 prefetchQueue:(id)arg2 ;
-(id)fetchAndRetain:(int*)arg1 ;
-(unsigned long long)bufferType;
-(NSString *)metadataTag;
-(CVBufferRef)_read:(int*)arg1 ;
-(int)_createCVPixelBufferFromAttributes:(id)arg1 pixelBuffer:(_CVBuffer*)arg2 ;
-(int)_compressionSettingsForProfile:(int)arg1 format:(int*)arg2 options:(id*)arg3 ;
-(int)_writeAndReleaseBacking;
-(int)compressionProfile;
@end
