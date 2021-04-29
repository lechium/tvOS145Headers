/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXGadgetProvider.h>

@class PXForYouPeopleQuestionsDataSource, NSString;

@interface PXPeopleQuestionsGadgetProvider : PXGadgetProvider {

	PXForYouPeopleQuestionsDataSource* _dataSource;

}

@property (nonatomic,retain) PXForYouPeopleQuestionsDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
+(id)_gadgetForQuestion:(id)arg1 ;
-(id)init;
-(NSString *)localizedTitle;
-(PXForYouPeopleQuestionsDataSource *)dataSource;
-(void)setDataSource:(PXForYouPeopleQuestionsDataSource *)arg1 ;
-(unsigned long long)estimatedNumberOfGadgets;
-(void)generateGadgets;
@end

