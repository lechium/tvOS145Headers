/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@class NSDictionary, NSString;

@interface CSVTUIASRGrammars : NSObject <NSURLSessionDelegate> {

	NSDictionary* _grammar;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedGrammars;
-(id)init;
-(id)getTrailingPatternsForUtt:(long long)arg1 Locale:(id)arg2 ;
-(id)getLeadingPatternsForUtt:(long long)arg1 Locale:(id)arg2 ;
-(id)getRegexPatternsForUtt:(long long)arg1 Locale:(id)arg2 ;
-(id)getLMEforLocale:(id)arg1 ;
-(id)createGrammars;
-(id)_getTrailingPatternsWithGrammars:(id)arg1 withLocale:(id)arg2 ;
-(id)_getLeadingPatternsWithGrammars:(id)arg1 withLocale:(id)arg2 ;
-(id)_getRegexPatternsWithGrammars:(id)arg1 withUtt:(long long)arg2 withLocale:(id)arg3 ;
-(id)_getLMEWithGrammar:(id)arg1 withLocale:(id)arg2 ;
@end

