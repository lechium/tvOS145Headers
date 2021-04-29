/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriVOX/SiriVOX-Structs.h>
#import <libobjc.A.dylib/SVXStoreDemoMutating.h>

@class SVXStoreDemo, NSString;

@interface _SVXStoreDemoMutation : NSObject <SVXStoreDemoMutating> {

	SVXStoreDemo* _baseModel;
	long long _transcriptID;
	NSString* _languageCode;
	long long _gender;
	float _outputVolume;
	struct {
		unsigned isDirty : 1;
		unsigned hasTranscriptID : 1;
		unsigned hasLanguageCode : 1;
		unsigned hasGender : 1;
		unsigned hasOutputVolume : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setGender:(long long)arg1 ;
-(void)setLanguageCode:(id)arg1 ;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
-(void)setOutputVolume:(float)arg1 ;
-(void)setTranscriptID:(long long)arg1 ;
@end

