/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VoiceServices/VoiceServices-Structs.h>
@class NSString;

@interface VSTextPreProcessorRule : NSObject {

	NSString* _matchPattern;
	NSString* _replacement;
	BOOL _caseSensitive;
	BOOL _eatPunctuation;

}
-(void)dealloc;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)matchedString:(id)arg1 forTokenInRange:(SCD_Struct_VS12*)arg2 ;
@end

