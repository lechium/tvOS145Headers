/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary;

@interface IDSTapToRadarContext : NSObject {

	NSDictionary* _rawContext;

}
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)_isValidClassification:(id)arg1 ;
-(BOOL)_isValidReproducibility:(id)arg1 ;
-(id)initWithTitle:(id)arg1 problemDescription:(id)arg2 ;
-(id)getTapToRadarURL;
@end

