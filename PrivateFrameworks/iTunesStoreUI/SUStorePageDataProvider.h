/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "ISDataProvider.h"

@class ISPropertyListProvider, SUClientInterface;

@interface SUStorePageDataProvider : ISDataProvider
{
    SUClientInterface *_clientInterface;
    int _outputType;
    ISPropertyListProvider *_propertyListDataProvider;
}

@property(copy) ISPropertyListProvider *propertyListDataProvider; // @synthesize propertyListDataProvider=_propertyListDataProvider;
@property int outputType; // @synthesize outputType=_outputType;
@property(retain) SUClientInterface *clientInterface; // @synthesize clientInterface=_clientInterface;
- (void)_loadPersonalizedStoreOffersForPage:(id)arg1;
- (BOOL)parseData:(id)arg1 returningError:(id *)arg2;
- (void)dealloc;

@end

