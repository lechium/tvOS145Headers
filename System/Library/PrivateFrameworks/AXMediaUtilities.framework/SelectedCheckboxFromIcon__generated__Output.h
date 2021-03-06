/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSDictionary, NSString, NSSet;

@interface SelectedCheckboxFromIcon__generated__Output : NSObject <MLFeatureProvider> {

	NSDictionary* _labelProbability;
	NSString* _label;

}

@property (nonatomic,retain) NSDictionary * labelProbability;              //@synthesize labelProbability=_labelProbability - In the implementation block
@property (nonatomic,retain) NSString * label;                             //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(NSDictionary *)labelProbability;
-(void)setLabelProbability:(NSDictionary *)arg1 ;
-(id)initWithLabelProbability:(id)arg1 label:(id)arg2 ;
@end

