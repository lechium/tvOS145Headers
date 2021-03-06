/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <NaturalLanguage/NaturalLanguage-Structs.h>
@interface NLDataInstanceLocator : NSObject {

	unsigned long long _instanceIndex;
	NSRange _rangeOfCharacters;
	NSRange _rangeOfTokens;

}

@property (readonly) unsigned long long instanceIndex; 
@property (readonly) NSRange rangeOfCharacters; 
@property (readonly) NSRange rangeOfTokens; 
-(id)description;
-(id)initWithInstanceIndex:(unsigned long long)arg1 rangeOfCharacters:(NSRange)arg2 rangeOfTokens:(NSRange)arg3 ;
-(NSRange)rangeOfTokens;
-(NSRange)rangeOfCharacters;
-(unsigned long long)instanceIndex;
@end

