/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/REMLElementRanker.h>

@protocol OS_dispatch_queue;
@class REMLElementComparator, NSObject, NSString;

@interface _REElementRankerWrapper : NSObject <REMLElementRanker> {

	/*^block*/id _featureMapGenerator;
	REMLElementComparator* _comparator;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,copy) id featureMapGenerator;                            //@synthesize featureMapGenerator=_featureMapGenerator - In the implementation block
@property (nonatomic,retain) REMLElementComparator * comparator;              //@synthesize comparator=_comparator - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(REMLElementComparator *)comparator;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setComparator:(REMLElementComparator *)arg1 ;
-(void)setFeatureMapGenerator:(id)arg1 ;
-(BOOL)shouldHideElement:(id)arg1 ;
-(id)featureMapGenerator;
@end

