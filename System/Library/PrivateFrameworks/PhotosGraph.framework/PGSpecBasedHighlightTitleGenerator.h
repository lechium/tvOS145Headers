/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGTitleGenerator.h>

@protocol PGEventEnrichment;
@class NSString;

@interface PGSpecBasedHighlightTitleGenerator : PGTitleGenerator {

	BOOL _createVerboseTitle;
	id<PGEventEnrichment> _collection;
	NSString* _meaningLabel;

}

@property (nonatomic,readonly) id<PGEventEnrichment> collection;              //@synthesize collection=_collection - In the implementation block
@property (nonatomic,readonly) NSString * meaningLabel;                       //@synthesize meaningLabel=_meaningLabel - In the implementation block
@property (nonatomic,readonly) BOOL createVerboseTitle;                       //@synthesize createVerboseTitle=_createVerboseTitle - In the implementation block
-(id<PGEventEnrichment>)collection;
-(NSString *)meaningLabel;
-(void)_generateTitleAndSubtitleWithResult:(/*^block*/id)arg1 ;
-(BOOL)createVerboseTitle;
-(id)initWithCollection:(id)arg1 meaningLabel:(id)arg2 createVerboseTitle:(BOOL)arg3 ;
@end

