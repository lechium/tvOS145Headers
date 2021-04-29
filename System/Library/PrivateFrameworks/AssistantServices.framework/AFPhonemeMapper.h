/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDictionary, NSRegularExpression;

@interface AFPhonemeMapper : NSObject {

	NSString* _languageCode;
	NSDictionary* _phonemeMap;
	NSRegularExpression* _regex;

}
+(id)_mapForLanguageCode:(id)arg1 ;
+(id)_buildRegexMatchingSubstrings:(id)arg1 ;
-(id)initWithLanguageCode:(id)arg1 ;
-(id)stringByReplacingPhonemesInString:(id)arg1 ;
@end
