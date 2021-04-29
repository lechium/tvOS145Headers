/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MPEntityPropertyTranslator.h>

@class NSArray, NSString;

@interface _MPKeyPathEntityPropertyTranslator : NSObject <MPEntityPropertyTranslator> {

	NSArray* _sourceKeyPaths;
	/*^block*/id _valueTransformBlock;
	/*function pointer*/void* _valueTransformFunction;

}

@property (nonatomic,readonly) NSArray * sourceKeyPaths;                                      //@synthesize sourceKeyPaths=_sourceKeyPaths - In the implementation block
@property (nonatomic,readonly) id valueTransformBlock;                                        //@synthesize valueTransformBlock=_valueTransformBlock - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* valueTransformFunction;              //@synthesize valueTransformFunction=_valueTransformFunction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)translatorForKeyPaths:(id)arg1 valueTransformBlock:(/*^block*/id)arg2 ;
+(id)translatorForKeyPaths:(id)arg1 valueTransformFunction:(/*function pointer*/void*)arg2 ;
-(id)valueFromSource:(id)arg1 context:(id)arg2 ;
-(id)valueTransformBlock;
-(NSArray *)sourceKeyPaths;
-(/*function pointer*/void*)valueTransformFunction;
@end

