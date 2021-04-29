/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <HomeAI/HomeAI-Structs.h>
@interface HMICameraVideoPosterFrameGeneratorInput : NSObject {

	unsigned long long _frameHeight;
	SCD_Struct_HM3 _generationFrequency;

}

@property (readonly) SCD_Struct_HM3 generationFrequency;              //@synthesize generationFrequency=_generationFrequency - In the implementation block
@property (readonly) unsigned long long frameHeight;                  //@synthesize frameHeight=_frameHeight - In the implementation block
-(id)initWithGenerationFrequency:(SCD_Struct_HM3)arg1 andPosterFrameHeight:(unsigned long long)arg2 ;
-(SCD_Struct_HM3)generationFrequency;
-(unsigned long long)frameHeight;
@end

