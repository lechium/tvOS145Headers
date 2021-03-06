/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreMotion/CoreMotion-Structs.h>
@interface CMVO2MaxClassification : NSObject {

	unique_ptr<CLVO2MaxClassifier, std::__1::default_delete<CLVO2MaxClassifier>>* fVO2MaxClassifier;

}
+(int)CLHKBiologicalSexFromBiologicalSex:(long long)arg1 ;
+(long long)biologicalSexFromCLHKBiologicalSex:(int)arg1 ;
-(id)init;
-(id)classificationDataFromStruct:(CLVO2MaxClassificationData)arg1 ;
-(void)queryAllClassificationsWithHandler:(/*^block*/id)arg1 ;
-(void)queryClassificationForBiologicalSex:(long long)arg1 age:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)queryClassificationForBiologicalSex:(long long)arg1 age:(long long)arg2 vo2Max:(double)arg3 handler:(/*^block*/id)arg4 ;
@end

