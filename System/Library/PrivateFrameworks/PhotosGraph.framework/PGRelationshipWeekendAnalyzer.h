/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PGRelationshipAnalyzer.h>

@class PGGraphRelationshipProcessor, NSString;

@interface PGRelationshipWeekendAnalyzer : NSObject <PGRelationshipAnalyzer> {

	PGGraphRelationshipProcessor* _processor;

}

@property (nonatomic,__weak,readonly) PGGraphRelationshipProcessor * processor;              //@synthesize processor=_processor - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(PGGraphRelationshipProcessor *)processor;
-(void)runAnalysisWithProgressBlock:(/*^block*/id)arg1 ;
-(id)initWithRelationshipProcessor:(id)arg1 ;
@end

