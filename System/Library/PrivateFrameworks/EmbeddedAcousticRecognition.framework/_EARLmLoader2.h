/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@interface _EARLmLoader2 : NSObject {

	shared_ptr<quasar::LmLoader2>* _loader;

}
+(void)initialize;
-(id)init;
-(void)invalidate;
-(id)fetchOrLoadModelWithDirectory:(id)arg1 recognizer:(id)arg2 ;
-(id)loadForRecognitionWithDirectory:(id)arg1 recognizer:(id)arg2 task:(id)arg3 applicationName:(id)arg4 ;
@end
