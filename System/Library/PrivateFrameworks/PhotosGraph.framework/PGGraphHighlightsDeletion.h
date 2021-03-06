/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGGraphChange.h>

@class NSSet;

@interface PGGraphHighlightsDeletion : PGGraphChange {

	NSSet* _highlightLocalIdentifiers;

}

@property (nonatomic,readonly) NSSet * highlightLocalIdentifiers;              //@synthesize highlightLocalIdentifiers=_highlightLocalIdentifiers - In the implementation block
-(id)description;
-(unsigned long long)type;
-(unsigned long long)changeCount;
-(id)initWithHighlightLocalIdentifiers:(id)arg1 ;
-(NSSet *)highlightLocalIdentifiers;
@end

