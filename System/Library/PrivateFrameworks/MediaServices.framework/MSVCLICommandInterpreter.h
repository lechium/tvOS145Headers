/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSMutableArray;

@interface MSVCLICommandInterpreter : NSObject {

	NSMutableDictionary* _commandToInvocationsMap;
	NSMutableArray* _retainedBlockHandlers;

}
-(id)init;
-(void)addHandlerToCommand:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)addHandlerToCommand:(id)arg1 withTarget:(id)arg2 action:(SEL)arg3 ;
-(BOOL)handlerExistsForCommand:(id)arg1 ;
-(BOOL)executeWithArgumentCount:(int)arg1 arguments:(const char**)arg2 ;
@end

