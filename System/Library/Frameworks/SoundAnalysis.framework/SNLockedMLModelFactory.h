/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SoundAnalysis/SoundAnalysis-Structs.h>
@class NSMapTable;

@interface SNLockedMLModelFactory : NSObject {

	NSMapTable* _vendedModels;
	mutex _lock;

}
-(id)init;
-(id)sharedLockedModelWithKey:(id)arg1 orCreateNewModelWithWithFunction:(/*^block*/id)arg2 ;
@end

