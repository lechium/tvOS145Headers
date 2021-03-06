/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TVLReadWriteFeedResource;
#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
@class TVLLegacyJSContext;

@interface TVLJSStorage : NSObject {

	TVLLegacyJSContext* _context;
	OpaqueJSValueRef _jsObjectRef;
	id<TVLReadWriteFeedResource> _resource;

}

@property (retain) TVLLegacyJSContext * context;                                 //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id<TVLReadWriteFeedResource> resource;              //@synthesize resource=_resource - In the implementation block
@property (assign,nonatomic) OpaqueJSValueRef jsObjectRef;                       //@synthesize jsObjectRef=_jsObjectRef - In the implementation block
-(void)dealloc;
-(TVLLegacyJSContext *)context;
-(void)setContext:(TVLLegacyJSContext *)arg1 ;
-(id<TVLReadWriteFeedResource>)resource;
-(void)setResource:(id<TVLReadWriteFeedResource>)arg1 ;
-(OpaqueJSValueRef)jsObjectRef;
-(id)initWithContext:(id)arg1 jsContext:(OpaqueJSContextRef)arg2 resource:(id)arg3 ;
-(void)setJsObjectRef:(OpaqueJSValueRef)arg1 ;
@end

