/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ASKNQMLParser <NSObject>
@required
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
-(void)parserDidStartDocument:(id)arg1;
-(void)parserDidEndDocument:(id)arg1;
-(void)parser:(id)arg1 didStartElement:(unsigned long long)arg2 attributes:(id)arg3;
-(void)parser:(id)arg1 didEndElement:(unsigned long long)arg2;
-(void)parserDidStartListElement:(id)arg1;
-(void)parser:(id)arg1 didStartListOfStyle:(unsigned long long)arg2;
-(void)parser:(id)arg1 didStartListOfStyle:(unsigned long long)arg2;
-(void)parserDidFindNewline:(id)arg1;
-(void)parserDidEndListElement:(id)arg1;
-(void)parser:(id)arg1 didEndListOfStyle:(unsigned long long)arg2;
-(void)parser:(id)arg1 didEndListOfStyle:(unsigned long long)arg2;
-(void)parser:(id)arg1 didFindCharacters:(id)arg2;

@end

