/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@interface _EARTokenizer : NSObject {

	BasicTextSanitizer* _sanitizer;
	shared_ptr<quasar::TextTokenizer>* _tokenizer;

}
+(unique_ptr<quasar::TextTokenizer, std::__1::default_delete<quasar::TextTokenizer>>*)tokenizerWithNcsRoot:(id)arg1 ;
-(id)tokenize:(id)arg1 ;
-(id)initWithNcsRoot:(id)arg1 ;
@end

