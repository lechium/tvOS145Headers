/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@interface _EARPhoneticMatchBuilder : NSObject {

	shared_ptr<quasar::TextTokenizer>* _tokenizer;
	shared_ptr<quasar::PMBuilder>* _pmBuilder;

}

@property (nonatomic,readonly) shared_ptr<quasar::TextTokenizer>* tokenizer;              //@synthesize tokenizer=_tokenizer - In the implementation block
@property (nonatomic,readonly) shared_ptr<quasar::PMBuilder>* pmBuilder;                  //@synthesize pmBuilder=_pmBuilder - In the implementation block
+(BOOL)writePlaceholderFstToPath:(id)arg1 ;
+(BOOL)writePlaceholderSymbolsToPath:(id)arg1 ;
-(void)reset;
-(shared_ptr<quasar::TextTokenizer>*)tokenizer;
-(id)initWithNcsRoot:(id)arg1 jsonConfigFile:(id)arg2 dataFeeds:(id)arg3 ;
-(id)initWithNcsRoot:(id)arg1 jsonConfigFile:(id)arg2 dataFeedsFile:(id)arg3 ;
-(BOOL)supportPhoneticMatchBuilding;
-(BOOL)buildGFsts;
-(BOOL)buildLFst;
-(BOOL)buildAlignedLFst;
-(BOOL)composeLGFsts;
-(BOOL)combineFsts;
-(BOOL)writeAlignedLFstToPath:(id)arg1 ;
-(BOOL)writeLGFstToPath:(id)arg1 ;
-(BOOL)writeOSymsToPath:(id)arg1 asText:(BOOL)arg2 quasarise:(BOOL)arg3 ;
-(BOOL)writeISymsToPath:(id)arg1 asText:(BOOL)arg2 ;
-(BOOL)writeGFstsToDirectory:(id)arg1 ;
-(BOOL)writeLFstToPath:(id)arg1 ;
-(BOOL)writeIndividualLGFstsToDirectory:(id)arg1 ;
-(BOOL)writeMetadataToPath:(id)arg1 ;
-(shared_ptr<quasar::PMBuilder>*)pmBuilder;
@end

