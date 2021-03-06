/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/_MPStateDumpPropertyListTransformable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface MPResponse : NSObject <_MPStateDumpPropertyListTransformable, NSCopying> {

	BOOL _valid;
	id _request;
	NSArray* _middleware;
	id _builder;

}

@property (nonatomic,copy) NSArray * middleware;                       //@synthesize middleware=_middleware - In the implementation block
@property (nonatomic,readonly) id builder;                             //@synthesize builder=_builder - In the implementation block
@property (nonatomic,copy,readonly) id request;                        //@synthesize request=_request - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid;              //@synthesize valid=_valid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)builderProtocol;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)invalidate;
-(BOOL)isValid;
-(id)request;
-(id)builder;
-(id)_stateDumpObject;
-(id)initWithRequest:(id)arg1 middleware:(id)arg2 ;
-(id)chain;
-(NSArray *)middleware;
-(void)setMiddleware:(NSArray *)arg1 ;
@end

