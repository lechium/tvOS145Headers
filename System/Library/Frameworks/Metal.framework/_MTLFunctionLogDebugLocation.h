/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MTLFunctionLogDebugLocation.h>

@class NSString, NSURL, MTLDebugLocation;

@interface _MTLFunctionLogDebugLocation : NSObject <MTLFunctionLogDebugLocation> {

	MTLDebugLocation* _debugLocation;
	NSURL* _URL;

}

@property (readonly) NSString * functionName; 
@property (readonly) NSURL * URL;                                   //@synthesize URL=_URL - In the implementation block
@property (readonly) unsigned long long line; 
@property (readonly) unsigned long long column; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)dealloc;
-(NSURL *)URL;
-(unsigned long long)line;
-(unsigned long long)column;
-(NSString *)functionName;
-(id)initWithDebugLocation:(id)arg1 ;
@end
