/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@interface _EARLmHandle : NSObject {

	shared_ptr<kaldi::quasar::LmHandle>* _handle;

}

@property (nonatomic,readonly) shared_ptr<kaldi::quasar::LmHandle>* handle;              //@synthesize handle=_handle - In the implementation block
-(shared_ptr<kaldi::quasar::LmHandle>*)handle;
-(id)_initWithHandle:(shared_ptr<kaldi::quasar::LmHandle>*)arg1 ;
@end

