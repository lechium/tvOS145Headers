/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CHDrawing, NSMutableDictionary;

@interface CHRecognizerInferenceCache : NSObject {

	CHDrawing* _lastDrawing;
	NSMutableDictionary* _cachedActivationMatrices;
	NSMutableDictionary* _cachedStrokeEndings;

}
-(id)description;
-(id)debugDescription;
-(id)init;
-(void)dealloc;
-(void)clearCache;
-(void)cacheActivationMatrix:(id)arg1 strokeEndings:(id)arg2 drawing:(id)arg3 recognitionEngineCachingKey:(id)arg4 ;
-(id)retrieveActivationMatrixForDrawing:(id)arg1 recognitionEngineCachingKey:(id)arg2 outStrokeEndings:(id*)arg3 ;
@end

