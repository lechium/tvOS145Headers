/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NaturalLanguage/NLDataProvider.h>

@interface NLPModelTrainingDataProvider : NLDataProvider {

	unsigned long long _numberOfInstances;
	void* _dataSource;
	/*^block*/id _instanceDataProvider;

}
-(id)instanceAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfInstances;
-(id)initWithConfiguration:(id)arg1 numberOfInstances:(unsigned long long)arg2 dataSource:(void*)arg3 instanceDataProvider:(/*^block*/id)arg4 ;
@end

