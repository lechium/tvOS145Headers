/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Foundation/Foundation-Structs.h>
@class NSData, NSString;

@interface _NSLexicon : NSObject {

	NSData* _data;
	NSString* _languageCode;

}

@property (nonatomic,copy,readonly) NSString * languageCode;              //@synthesize languageCode=_languageCode - In the implementation block
+(id)systemLexiconForLanguageCode:(id)arg1 ;
-(void)dealloc;
-(NSString *)languageCode;
-(id)initWithContentsOfURL:(id)arg1 languageCode:(id)arg2 error:(id*)arg3 ;
-(id)lemmasForWord:(id)arg1 ;
-(id)_lemmasInLikelihoodOrderForWord:(id)arg1 matchingWordAttributes:(SCD_Struct_NS28)arg2 ;
@end

